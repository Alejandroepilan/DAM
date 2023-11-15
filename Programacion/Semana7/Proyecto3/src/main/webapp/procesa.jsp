<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
<%@ page import = "java.io.FileWriter" %>
<%@ page import = "java.io.IOException" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	String nombre = request.getParameter("nombre");
	String apellido = request.getParameter("apellido");
	String email = request.getParameter("email");
	String telefono = request.getParameter("telefono");
	String resultado = nombre + " | " + apellido + " | " + email + " | " + telefono;
	out.println(resultado);
	
	try {
		FileWriter myWriter = new FileWriter("filename.txt");
		myWriter.write(resultado);
		myWriter.close();
	} catch (IOException e) {
		out.println("Ha ocurrido un error.");
		e.printStackTrace();
	}
	%>
</body>
</html>
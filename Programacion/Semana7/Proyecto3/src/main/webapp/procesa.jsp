<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
<%@ page import = "java.io.File" %>
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
	
	try {
		File myObj = new File("filename.txt");
		if (myObj.createNewFile()) {
			out.println("Archivo: " + myObj.getName());
		} else {
			out.println("El archivo ya existe");
		}
	} catch (IOException e) {
		e.printStackTrace();
	}
	%>
</body>
</html>
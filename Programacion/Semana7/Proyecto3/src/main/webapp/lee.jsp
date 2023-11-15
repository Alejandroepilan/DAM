<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
<%@ page import = "java.io.File" %>
<%@ page import = "java.io.FileNotFoundException" %>
<%@ page import = "java.util.Scanner" %>	

<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	try {
		File myObj = new File("filename.txt");
		Scanner myReader = new Scanner(myObj);
		while (myReader.hasNextLine()) {
			String data = myReader.nextLine();
			out.println(data);
		}
		myReader.close();
	} catch (FileNotFoundException e) {
		out.println("Ha ocurrido un error.");
		e.printStackTrace();
	}
	%>
</body>
</html>
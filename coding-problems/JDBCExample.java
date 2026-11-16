package com.example.demo;


import java.util.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class DemoApplication
{
		
		public static void main(String[] args) throws SQLException
		{
			Scanner scanner=new Scanner(System.in);
			try
			{
				
				Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/test","sakthi","Sakthi@123");

				PreparedStatement statement= connection.prepareStatement("select id,name from student where dept=?");
				
				
				System.out.print("Enter your department name : ");
				
				
				String departmentName=scanner.nextLine();

				
				statement.setString(1,departmentName);
				
				ResultSet resultSet=statement.executeQuery();
				
				

				while(resultSet.next())
				{
					int id= resultSet.getInt("id");
					String name=resultSet.getString("name");
					System.out.println(id+" "+name);
				}
				
				connection.close();
			}
			catch(Exception e)
			{
			 	//System.out.println("SQLException: " + exception.getMessage());
    			//System.out.println("SQLState: " + exception.getSQLState());
		    	//System.out.println("VendorError: " + exception.getErrorCode());
		    	System.err.println(e);
			}
		}
}

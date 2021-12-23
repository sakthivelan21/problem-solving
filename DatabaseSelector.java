import java.util.*;
import java.sql.*;

public class DatabaseSelector
{
		
		public static void main(String[] args) throws SQLException
		{
			try
			{

				Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/test","sakthi","Sakthi@123");

				Statement statement= connection.createStatement();

				ResultSet resultSet=statement.executeQuery("select id,name from student");

				while(resultSet.next())
				{
					int id= resultSet.getInt("id");
					String name=resultSet.getString("name");
					System.out.println(id+" "+name);
				}
			}
			catch(SQLException exception)
			{
			 	System.out.println("SQLException: " + exception.getMessage());
    			System.out.println("SQLState: " + exception.getSQLState());
		    	System.out.println("VendorError: " + exception.getErrorCode());
			}
		}
}

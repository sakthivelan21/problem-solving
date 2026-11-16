class Employee
{
	constructor(name,designation,yearsOfExperience)
	{
		this.name=name;
		this.designation=designation;
		this.yearsOfExperience=yearsOfExperience;
	}
	
	getEmployeeDetails()
	{
		let date= new Date();
		return this.name + " is serving the position of "+ this.designation + " since " + (date.getFullYear()- this.yearsOfExperience);
	}
	
}

function createEmployee(name,designation,yearsOfExperience)
{
	return new Employee(name,designation,yearsOfExperience);
}

function displayEmployee(name,designation,yearsOfExperience)
{
	let employee= createEmployee(name,designation,yearsOfExperience);
	
	if( employee instanceof Employee)
	
		return employee.getEmployeeDetails();
	else
		return "employee object is not initiated properly !!!";
	
}

console.log(displayEmployee("Jerold","Manager",15));

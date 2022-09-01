output = "";
string[] digits = Regex.Split(input, @"\D+");

foreach(string value in digits){
	int number;
	if(int.TryParse(value,out number)){
		output = value;
		}}
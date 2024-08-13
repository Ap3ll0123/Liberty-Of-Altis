

	char dirinput = toupper(direction);

	if (dirinput == 'W') {
		if (GetY() == 0) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else if (AlliedTroops::collisioncheck(other) == true) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else {
			SetY(GetY() - 1);
			std::cout << GetY() << std::endl;
		}
	}
	else if (dirinput == 'S') {
		if (GetY() == 17) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else if (AlliedTroops::collisioncheck(other) == true) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else {
			SetY(GetY() + 1);
			std::cout << GetY() << std::endl;
		}
	}
	else if (dirinput == 'A') {
		if (GetX() == 0) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else if (AlliedTroops::collisioncheck(other) == true) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else {
			SetX(GetX() - 1);
			std::cout << GetX() << std::endl;
		}
	}
	else if (dirinput == 'D') {
		if (GetX() == 33) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else if (AlliedTroops::collisioncheck(other) == true) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else {
			SetX(GetX() + 1);
			std::cout << GetX() << std::endl;
		}
	}

}

bool AlliedTroops::Attacking(int range, Entity& other)
{
	char input;
	input = toupper(input);
	//Return true if can attack
	int distance = GetX() - other.GetX();
	if (abs(distance) == range) {
		std::cout << "Attack Successful";
		return true;
	}
	else {
		std::cout << "Cant attack";
		return false;
	}
}

bool AlliedTroops::collisioncheck(Entity& other)
{
	// ur pos = other pos - 1
	if (GetX() == other.GetX()) {
		return true;
	}
}

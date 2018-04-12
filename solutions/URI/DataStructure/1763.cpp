#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string, string> mp;
	
	mp["brasil"] = "Feliz Natal!";
	mp["alemanha"] = "Frohliche Weihnachten!";	
	mp["austria"] = "Frohe Weihnacht!";
	mp["coreia"] = "Chuk Sung Tan!";
	mp["espanha"] = "Feliz Navidad!";
	mp["grecia"] = "Kala Christougena!";
	mp["estados-unidos"] = "Merry Christmas!";
	mp["inglaterra"] = "Merry Christmas!";
	mp["australia"] = "Merry Christmas!";
	mp["portugal"] = "Feliz Natal!";
	mp["suecia"] = "God Jul!";
	mp["turquia"] = "Mutlu Noeller";
	mp["argentina"] = "Feliz Navidad!";
	mp["chile"] = "Feliz Navidad!";
	mp["mexico"] = "Feliz Navidad!";
	mp["antardida"] = "Merry Christmas!";
	mp["canada"] = "Merry Christmas!";
	mp["irlanda"] = "Nollaig Shona Dhuit!";	
	mp["belgica"] = "Zalig Kerstfeest!";
	mp["italia"] = "Buon Natale!";
	mp["libia"] = "Buon Natale!";
	mp["siria"] = "Milad Mubarak!";
	mp["marrocos"] = "Milad Mubarak!";
	mp["japao"] = "Merii Kurisumasu!";
	
	string s;
	while(cin>>s){
		auto it = mp.find(s);
		if(it != mp.end()) cout<<(it->second)<<endl;
		else cout<<"--- NOT FOUND ---"<<endl;
	}
	
	return 0;
}  

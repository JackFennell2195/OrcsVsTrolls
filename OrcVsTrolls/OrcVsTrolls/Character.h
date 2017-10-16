#pragma once
#include <iostream>
#include "string"

class Character
{
public:
	virtual void setStats(std::string greet,
		std::string name,
		float hp,
		float dmg,
		float spl,
		float shd,
		float def,
		bool alve) = 0;

	Character() : m_greeting("m_greetings"), m_hp(10) { }
	virtual void display() = 0;

protected:
	std::string m_greeting;
	std::string m_name;
	float m_hp;
	float m_damage;
	float m_spell;
	float m_shield;
	float m_defence;
	bool m_alive;
};

class Troll : public Character
{
public:
	int trollSelect();
	void setStats(std::string greet,
				  std::string name,
				  float hp,
				  float dmg,
				  float spl,
		          float shd,
		          float def,
		          bool alve);

	
	void display() { 
	std::cout << m_greeting << std::endl; 
	std::cout << m_name << std::endl;
	std::cout << "My health is " << m_hp << std::endl;
	std::cout << "My base attack is " << m_damage << std::endl;
	std::cout << "My spell power is " << m_spell << std::endl;
	std::cout << "My shield power is " << m_shield << std::endl;
	std::cout << "My defence is " << m_defence << std::endl;
	
	}

private:
	
	float troll_tap = 5.1f;
	float troll_nudge = 6.3f;
	float troll_hit = 7.2f;
	float troll_strike = 8.4f;
	float troll_sweep = 9.1f;
	float troll_bite = 10.5f;
	float trollsRage = 15.2f;
	float melee[7] = { troll_tap, troll_nudge, troll_hit, troll_strike, troll_sweep, troll_bite, trollsRage };

	float iban_Blast = 7.5f;
	float fire_Blast = 8.9f;
	float troll_heal = 10.0f;
	float claws_of_Guthix = 2.4f;
	float fire_strike = 5.5f;
	float spells[5] = { iban_Blast, fire_Blast, troll_heal, claws_of_Guthix, fire_strike };

	float light_trollshield = 4.6f;
	float heavy_trollshield = 8.3f;
	float troll_shield_wall = 10.5f;
	float shields[3] = {light_trollshield, heavy_trollshield, troll_shield_wall};

	
	
};

class Orc : public Character
{
public:
	int orcSelect();
	void setStats(std::string greet,
		          std::string name,
		          float hp,
		          float dmg,
		          float spl,
		          float shd,
		          float def,
		          bool alve);

	
	void display() { 
		std::cout << m_greeting << std::endl;
		std::cout << m_name << std::endl;
		std::cout << "My health is " << m_hp << std::endl;
		std::cout << "My base attack is " << m_damage << std::endl;
		std::cout << "My spell power is " << m_spell << std::endl;
		std::cout << "My shield power is " << m_shield << std::endl;
		std::cout << "My defence is " << m_defence << std::endl;
	}

private:
	float orc_tap = 3.2f;
	float orc_nudge = 4.1f;
	float orc_hit = 5.6f;
	float orc_strike = 6.0f;
	float orc_sweep = 7.2f;
	float orc_bite = 8.3f;
	float orcsRage = 12.3f;
	float melee[7] = { orc_tap, orc_nudge, orc_hit, orc_strike, orc_sweep, orc_bite, orcsRage };
	
	float oban_Blast = 6.5f;
	float water_Blast = 7.9f;
	float orc_heal = 10.0f;
	float fangs_of_Zamorax = 6.4f;
	float water_strike = 3.5f;
	float spells[5] = {oban_Blast, water_Blast, orc_heal, fangs_of_Zamorax, water_strike};
	
	float light_orcshield = 5.6f;
	float heavy_orcshield = 9.3f;
	float orc_shield_wall = 11.5f;
	float shields[3] = {light_orcshield,heavy_orcshield,orc_shield_wall};

	

};
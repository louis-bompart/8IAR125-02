#include "AgentPoursuiveur.h"
#include "SteeringBehaviors.h"


AgentPoursuiveur::AgentPoursuiveur(GameWorld* world,
	Vector2D position,
	double    rotation,
	Vector2D velocity,
	double    mass,
	double    max_force,
	double    max_speed,
	double    max_turn_rate,
	double    scale,
	Vehicle*   v_agent_leader) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
	this->v_agent_leader = v_agent_leader;
}

void AgentPoursuiveur::Go() {
	this->Steering()->OffsetPursuitOn(v_agent_leader, Vector2D(0.1,0.1));
	this->Steering()->SeparationOn();
}


AgentPoursuiveur::~AgentPoursuiveur()
{
}
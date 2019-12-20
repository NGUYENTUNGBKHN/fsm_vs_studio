#pragma once

struct fsm_obj_s;

// state
struct fsm_state_s
{
	char *fsm_state_name;
	void(*func_t)(struct fsm_obj_s *obj);
	struct fsm_obj_s fsm_state_next;
};

struct fsm_obj_s
{
	struct fsm_state_s *fsm_base;
	struct fsm_state_s *fsm_cur_state;
	char *fsm_cur_state_name; // name state current
};
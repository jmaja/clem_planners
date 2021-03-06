#include <pluginlib/class_list_macros.h>
#include "clem_planners/clem_global.h" // Include the header file we created in include

using namespace std;

namespace clem_planner {

  GlobalPlanner::GlobalPlanner (){
}
  
GlobalPlanner::GlobalPlanner(std::string name, costmap_2d::Costmap2DROS*costmap_ros){
  initialize(name, costmap_ros);
}
  
void GlobalPlanner::initialize(std::string name, costmap_2d::Costmap2DROS*
costmap_ros){
}
  
bool GlobalPlanner::makePlan(const geometry_msgs::PoseStamped& start, const
geometry_msgs::PoseStamped& goal, std::vector<geometry_msgs::PoseStamped>&
plan ){
  
  plan.push_back(start); // Make a very simple plan that is a straight line from start
  plan.push_back(goal); // to end points
  return true;
 }
};

PLUGINLIB_EXPORT_CLASS(clem_planner::GlobalPlanner, nav_core::BaseGlobalPlanner) // This is necessary to make this a plugin library

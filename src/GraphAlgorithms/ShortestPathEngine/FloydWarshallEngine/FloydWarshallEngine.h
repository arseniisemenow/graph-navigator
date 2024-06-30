#ifndef A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_SHORTESTPATHENGINE_FLOYDWARSHALLENGINE_H_
#define A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_SHORTESTPATHENGINE_FLOYDWARSHALLENGINE_H_

#include "Graph/Graph.h"
namespace s21 {
class FloydWarshallEngine {
 public:
  [[nodiscard]] std::vector<std::vector<int>>
  GetShortestPathsBetweenAllVertices(const Graph&);
};

}  // namespace s21

#endif  // A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_SHORTESTPATHENGINE_FLOYDWARSHALLENGINE_H_

/*
 * RandomLinkSampler.h
 *
 *  Created on: 28.02.2015
 *      Author: Kolja Esders (kolja.esders@student.kit.edu)
 */

#ifndef RANDOMLINKSAMPLER_H_
#define RANDOMLINKSAMPLER_H_

#include <utility>

#include "../graph/Graph.h"

namespace NetworKit {

/**
 * @ingroup linkprediction
 *
 * Provides methods to randomly sample a number of edges from a given graph.
 */
namespace RandomLinkSampler {

/**
 * Returns a graph that contains @a percentage percent of links form the given graph @a G.
 * The links are randomly selected from @a G until the given percentage is reached.
 * @param G The graph to construct the training graph from
 * @param percentage Percentage of links regarding the number of links in the
 * given graph that should be in the returned graph
 * @return a graph that contains the given percentage of links from @a G
 */
Graph byPercentage(const Graph& G, double percentage);

/**
 * Returns a graph that contains @a numLinks links from the given graph @a G.
 * The links are randomly selected from @a G until the given count is reached.
 * @param G The graph to construct the training graph from
 * @param numLinks Number of links the returned graph should consist of
 * @return a graph that contains the given number of links from @a G
 */
Graph byCount(const Graph& G, count numLinks);

} // namespace RandomLinkSampler

} // namespace NetworKit

#endif /* RANDOMLINKSAMPLER_H_ */
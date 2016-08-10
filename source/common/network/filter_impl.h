#pragma once

namespace Network {

/**
 * Implementation of Network::ReadFilter that discards read callbacks.
 */
class ReadFilterBaseImpl : public ReadFilter {
public:
  void initializeReadFilterCallbacks(ReadFilterCallbacks&) override {}
};

/**
 * Implementation of Network::Filter that discards read callbacks.
 */
class FilterBaseImpl : public Filter {
public:
  void initializeReadFilterCallbacks(ReadFilterCallbacks&) override {}
};

} // Network

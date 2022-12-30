#pragma once

#include <rose/hash.h>
#include <rose/typetraits.h>
#include <serializer/serializer.h>

///////////////////////////////////////////////////////////////////
//  AUTOGEN                                                      //
//  command:
//    rose.parser -I world.h -O world.serializer.h
///////////////////////////////////////////////////////////////////

enum class                   StoneState : int ;
const char * to_string(const StoneState &);
namespace rose {
  namespace ecs {
    void      deserialize(StoneState &o, IDeserializer &s);
    void        serialize(StoneState &o, ISerializer &s);
  }
  template<>
  struct type_id<StoneState> {
    inline static hash_value VALUE = 11910806599994158533ULL;
  };
  hash_value         hash(const StoneState &o);
  void construct_defaults(      StoneState &o); //implement me
}


enum class                   WorldState : int ;
const char * to_string(const WorldState &);
namespace rose {
  namespace ecs {
    void      deserialize(WorldState &o, IDeserializer &s);
    void        serialize(WorldState &o, ISerializer &s);
  }
  template<>
  struct type_id<WorldState> {
    inline static hash_value VALUE = 18364368338018397444ULL;
  };
  hash_value         hash(const WorldState &o);
  void construct_defaults(      WorldState &o); //implement me
}


namespace rose {
  namespace ecs {
  }
  hash_value         hash(const Color &o);
  template<>
  struct type_id<Color> {
    inline static hash_value VALUE = 11375897551430744876ULL;
  };
  void construct_defaults(      Color &o); // implement me
}
bool operator==(const Color &lhs, const Color &rhs);
bool operator!=(const Color &lhs, const Color &rhs);


namespace rose {
  namespace ecs {
  }
  hash_value         hash(const Vector3 &o);
  template<>
  struct type_id<Vector3> {
    inline static hash_value VALUE = 865855757241434760ULL;
  };
  void construct_defaults(      Vector3 &o); // implement me
}
bool operator==(const Vector3 &lhs, const Vector3 &rhs);
bool operator!=(const Vector3 &lhs, const Vector3 &rhs);


struct                Stone;
namespace rose {
  namespace ecs {
    void        serialize(Stone &o, ISerializer &s);
    void      deserialize(Stone &o, IDeserializer &s);
  }
  hash_value         hash(const Stone &o);
  template<>
  struct type_id<Stone> {
    inline static hash_value VALUE = 1551552509579347363ULL;
  };
  void construct_defaults(      Stone &o); // implement me
}
bool operator==(const Stone &lhs, const Stone &rhs);
bool operator!=(const Stone &lhs, const Stone &rhs);


struct                World;
namespace rose {
  namespace ecs {
    void        serialize(World &o, ISerializer &s);
    void      deserialize(World &o, IDeserializer &s);
  }
  hash_value         hash(const World &o);
  template<>
  struct type_id<World> {
    inline static hash_value VALUE = 4948442482138032016ULL;
  };
  void construct_defaults(      World &o); // implement me
}
bool operator==(const World &lhs, const World &rhs);
bool operator!=(const World &lhs, const World &rhs);


#ifdef IMPL_SERIALIZER

    #ifndef IMPL_SERIALIZER_UTIL
    #define IMPL_SERIALIZER_UTIL
    #include <cstring>

    namespace {
    //internal helper methods
    template<class T>
    bool rose_parser_equals(const T& lhs, const T& rhs) {
      return lhs == rhs;
    }

    template<class T, size_t N>
    bool rose_parser_equals(const T(&lhs)[N], const T(&rhs)[N]) {
      for (size_t i = 0; i != N; ++i) {
        if (lhs[i] != rhs[i]) return false;
      }
      return true;
    }

    template<size_t N>
    bool rose_parser_equals(const char(&lhs)[N], const char(&rhs)[N]) {
      for (size_t i = 0; i != N; ++i) {
        if (lhs[i] != rhs[i]) return false;
        if (lhs[i] == 0) return true;
      }
      return true;
    }

    template<class T>
    bool rose_parser_equals(const std::vector<T> &lhs, const std::vector<T> &rhs) {
      if (lhs.size() != rhs.size()) return false;
      for (size_t i = 0; i != lhs.size(); ++i) {
        if (lhs[i] != rhs[i]) return false;
      }
      return true;
    }

    template<class TL, class TR>
    void assign(TL& lhs, TR&& rhs) {
      lhs = rhs;
    }

    template<class T>
    void construct_default(std::vector<T> & v) {
      c.clear();
    }
    }
    #endif
  
const char * to_string(const StoneState & e) {
    switch(e) {
        case StoneState::Alive: return "Alive";
        case StoneState::Dead: return "Dead";
        default: return "<UNKNOWN>";
    }
}
void rose::ecs::serialize(StoneState& o, ISerializer& s) {
  switch (o) {
    case StoneState::Alive: {
      char str[] = "Alive";
      serialize(str, s);
      break;
    }
    case StoneState::Dead: {
      char str[] = "Dead";
      serialize(str, s);
      break;
    }
    default: /* unknown */ break;
  }
}
void rose::ecs::deserialize(StoneState& o, IDeserializer& s) {
  char str[64];
  deserialize(str, s);
  rose::hash_value h = rose::hash(str);
  switch (h) {
  case rose::hash("Alive"): o = StoneState::Alive; break;
  case rose::hash("Dead"): o = StoneState::Dead; break;
  default: /*unknown value*/ break;
  }
}
rose::hash_value       rose::hash(const StoneState& o) {
  return static_cast<rose::hash_value>(o);
}

const char * to_string(const WorldState & e) {
    switch(e) {
        case WorldState::NewGame: return "NewGame";
        case WorldState::Running: return "Running";
        case WorldState::Paused: return "Paused";
        default: return "<UNKNOWN>";
    }
}
void rose::ecs::serialize(WorldState& o, ISerializer& s) {
  switch (o) {
    case WorldState::NewGame: {
      char str[] = "NewGame";
      serialize(str, s);
      break;
    }
    case WorldState::Running: {
      char str[] = "Running";
      serialize(str, s);
      break;
    }
    case WorldState::Paused: {
      char str[] = "Paused";
      serialize(str, s);
      break;
    }
    default: /* unknown */ break;
  }
}
void rose::ecs::deserialize(WorldState& o, IDeserializer& s) {
  char str[64];
  deserialize(str, s);
  rose::hash_value h = rose::hash(str);
  switch (h) {
  case rose::hash("NewGame"): o = WorldState::NewGame; break;
  case rose::hash("Running"): o = WorldState::Running; break;
  case rose::hash("Paused"): o = WorldState::Paused; break;
  default: /*unknown value*/ break;
  }
}
rose::hash_value       rose::hash(const WorldState& o) {
  return static_cast<rose::hash_value>(o);
}

///////////////////////////////////////////////////////////////////
//  struct Color
///////////////////////////////////////////////////////////////////
bool operator==(const Color &lhs, const Color &rhs) {
  return
    rose_parser_equals(lhs.r, rhs.r) &&
    rose_parser_equals(lhs.g, rhs.g) &&
    rose_parser_equals(lhs.b, rhs.b) &&
    rose_parser_equals(lhs.a, rhs.a) ;
}

bool operator!=(const Color &lhs, const Color &rhs) {
  return
    !rose_parser_equals(lhs.r, rhs.r) ||
    !rose_parser_equals(lhs.g, rhs.g) ||
    !rose_parser_equals(lhs.b, rhs.b) ||
    !rose_parser_equals(lhs.a, rhs.a) ;
}

rose::hash_value rose::hash(const Color &o) {
  rose::hash_value h = rose::hash(o.r);
  h = rose::xor64(h);
  h ^= rose::hash(o.g);
  h = rose::xor64(h);
  h ^= rose::hash(o.b);
  h = rose::xor64(h);
  h ^= rose::hash(o.a);
  return h;
}
///////////////////////////////////////////////////////////////////
//  struct Vector3
///////////////////////////////////////////////////////////////////
bool operator==(const Vector3 &lhs, const Vector3 &rhs) {
  return
    rose_parser_equals(lhs.x, rhs.x) &&
    rose_parser_equals(lhs.y, rhs.y) &&
    rose_parser_equals(lhs.z, rhs.z) ;
}

bool operator!=(const Vector3 &lhs, const Vector3 &rhs) {
  return
    !rose_parser_equals(lhs.x, rhs.x) ||
    !rose_parser_equals(lhs.y, rhs.y) ||
    !rose_parser_equals(lhs.z, rhs.z) ;
}

rose::hash_value rose::hash(const Vector3 &o) {
  rose::hash_value h = rose::hash(o.x);
  h = rose::xor64(h);
  h ^= rose::hash(o.y);
  h = rose::xor64(h);
  h ^= rose::hash(o.z);
  return h;
}
///////////////////////////////////////////////////////////////////
//  struct Stone
///////////////////////////////////////////////////////////////////
bool operator==(const Stone &lhs, const Stone &rhs) {
  return
    rose_parser_equals(lhs.position, rhs.position) &&
    rose_parser_equals(lhs.size, rhs.size) &&
    rose_parser_equals(lhs.color, rhs.color) &&
    rose_parser_equals(lhs.state, rhs.state) ;
}

bool operator!=(const Stone &lhs, const Stone &rhs) {
  return
    !rose_parser_equals(lhs.position, rhs.position) ||
    !rose_parser_equals(lhs.size, rhs.size) ||
    !rose_parser_equals(lhs.color, rhs.color) ||
    !rose_parser_equals(lhs.state, rhs.state) ;
}

void rose::ecs::serialize(Stone &o, ISerializer &s) {
  if(s.node_begin("Stone", rose::hash("Stone"), &o)) {
    s.key("position");
    serialize(o.position, s);
    s.key("size");
    serialize(o.size, s);
    s.key("color");
    serialize(o.color, s);
    s.key("state");
    serialize(o.state, s);
    s.node_end();
  }
  s.end();
}

void rose::ecs::deserialize(Stone &o, IDeserializer &s) {
  //implement me
  //construct_defaults(o);

  while (s.next_key()) {
    switch (s.hash_key()) {
      case rose::hash("position"):
        deserialize(o.position, s);
        break;
      case rose::hash("size"):
        deserialize(o.size, s);
        break;
      case rose::hash("color"):
        deserialize(o.color, s);
        break;
      case rose::hash("state"):
        deserialize(o.state, s);
        break;
      default: s.skip_key(); break;
    }
  }
}

rose::hash_value rose::hash(const Stone &o) {
  rose::hash_value h = rose::hash(o.position);
  h = rose::xor64(h);
  h ^= rose::hash(o.size);
  h = rose::xor64(h);
  h ^= rose::hash(o.color);
  h = rose::xor64(h);
  h ^= rose::hash(o.state);
  return h;
}
///////////////////////////////////////////////////////////////////
//  struct World
///////////////////////////////////////////////////////////////////
bool operator==(const World &lhs, const World &rhs) {
  return
    rose_parser_equals(lhs.cubePosition, rhs.cubePosition) &&
    rose_parser_equals(lhs.ballPosition, rhs.ballPosition) &&
    rose_parser_equals(lhs.ballVelocity, rhs.ballVelocity) &&
    rose_parser_equals(lhs.points, rhs.points) &&
    rose_parser_equals(lhs.state, rhs.state) &&
    rose_parser_equals(lhs.stones, rhs.stones) ;
}

bool operator!=(const World &lhs, const World &rhs) {
  return
    !rose_parser_equals(lhs.cubePosition, rhs.cubePosition) ||
    !rose_parser_equals(lhs.ballPosition, rhs.ballPosition) ||
    !rose_parser_equals(lhs.ballVelocity, rhs.ballVelocity) ||
    !rose_parser_equals(lhs.points, rhs.points) ||
    !rose_parser_equals(lhs.state, rhs.state) ||
    !rose_parser_equals(lhs.stones, rhs.stones) ;
}

void rose::ecs::serialize(World &o, ISerializer &s) {
  if(s.node_begin("World", rose::hash("World"), &o)) {
    s.key("cubePosition");
    serialize(o.cubePosition, s);
    s.key("ballPosition");
    serialize(o.ballPosition, s);
    s.key("ballVelocity");
    serialize(o.ballVelocity, s);
    s.key("points");
    serialize(o.points, s);
    s.key("state");
    serialize(o.state, s);
    s.key("stones");
    serialize(o.stones, s);
    s.node_end();
  }
  s.end();
}

void rose::ecs::deserialize(World &o, IDeserializer &s) {
  //implement me
  //construct_defaults(o);

  while (s.next_key()) {
    switch (s.hash_key()) {
      case rose::hash("cubePosition"):
        deserialize(o.cubePosition, s);
        break;
      case rose::hash("ballPosition"):
        deserialize(o.ballPosition, s);
        break;
      case rose::hash("ballVelocity"):
        deserialize(o.ballVelocity, s);
        break;
      case rose::hash("points"):
        deserialize(o.points, s);
        break;
      case rose::hash("state"):
        deserialize(o.state, s);
        break;
      case rose::hash("stones"):
        deserialize(o.stones, s);
        break;
      default: s.skip_key(); break;
    }
  }
}

rose::hash_value rose::hash(const World &o) {
  rose::hash_value h = rose::hash(o.cubePosition);
  h = rose::xor64(h);
  h ^= rose::hash(o.ballPosition);
  h = rose::xor64(h);
  h ^= rose::hash(o.ballVelocity);
  h = rose::xor64(h);
  h ^= rose::hash(o.points);
  h = rose::xor64(h);
  h ^= rose::hash(o.state);
  h = rose::xor64(h);
  h ^= rose::hash(o.stones);
  return h;
}

#endif

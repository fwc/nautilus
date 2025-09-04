/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2273
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2273
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned short> var_0, val<int> var_3, val<bool> var_6, val<signed char> var_8, val<unsigned short> var_9, val<unsigned short> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19, val<long long int*> var_20) {
    *var_18 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_0), (var_12)))) ? (((val<unsigned int>) var_9)) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_0)))))))) ? (min((var_3), (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) < (6354526142531864627ULL)))))) : ((+((((val<bool>)0) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_8))))))));
    *var_19 = ((/* implicit */val<unsigned char>) (!(var_6)));
    *var_20 = ((/* implicit */val<long long int>) max((*var_20), (((/* implicit */val<long long int>) (((-(min((((/* implicit */val<int>) var_12)), (-1))))) <= (((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23561;
int var_3 = 204305565;
bool var_6 = (bool)0;
signed char var_8 = (signed char)90;
unsigned short var_9 = (unsigned short)35864;
unsigned short var_11 = (unsigned short)36812;
unsigned short var_12 = (unsigned short)11395;
int zero = 0;
unsigned char var_18 = (unsigned char)56;
unsigned char var_19 = (unsigned char)31;
long long int var_20 = -168032473454224943LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)57;
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_8, var_9, var_11, var_12, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}

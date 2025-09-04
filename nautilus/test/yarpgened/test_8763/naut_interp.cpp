/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8763
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8763
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) min((*var_19), (5403183393234642689ULL)));
    *var_20 = ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) var_17)) ? (var_0) : (var_4))) : ((~(var_17))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3640371231759272544ULL;
unsigned long long int var_2 = 4893968219518445662ULL;
unsigned long long int var_4 = 9682978945982189575ULL;
unsigned long long int var_17 = 16006781725166185187ULL;
int zero = 0;
unsigned long long int var_19 = 3924838521991728565ULL;
unsigned long long int var_20 = 14900545575685104028ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3924838521991728565ULL;
    value_mismatch |= var_20 != 3640371231759272544ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}

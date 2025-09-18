/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2320
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2320
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<int> var_0, val<unsigned long long int> var_5, val<unsigned short> var_10, val<int> zero, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_0) : (((/* implicit */val<int>) (val<unsigned short>)7330))))) && (((/* implicit */val<bool>) (+(var_5)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) min((((/* implicit */val<int>) (val<unsigned short>)58206)), (-1077086333)))))) : (var_5)));
    *var_13 = ((/* implicit */val<unsigned short>) ((1296012730025797524ULL) * (((/* implicit */val<unsigned long long int>) -1146664346))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 220651428;
unsigned long long int var_5 = 4539906948472331233ULL;
unsigned short var_10 = (unsigned short)33205;
int zero = 0;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)36949;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)3320;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_10, zero, &var_12, &var_13);
  checksum();
}

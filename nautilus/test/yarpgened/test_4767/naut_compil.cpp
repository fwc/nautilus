/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4767
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4767
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
void test(val<unsigned short> var_4, val<int> var_8, val<unsigned long long int> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) min(((~(((/* implicit */val<int>) var_4)))), (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)39462)), (3U)))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) <= (((/* implicit */val<int>) (val<unsigned short>)39443))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 2133421691U)) && (((/* implicit */val<bool>) var_10)))))))));
    *var_13 = ((/* implicit */val<unsigned short>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14469;
int var_8 = 835194188;
unsigned long long int var_10 = 4754241519820438794ULL;
unsigned short var_11 = (unsigned short)55087;
int zero = 0;
unsigned char var_12 = (unsigned char)187;
unsigned short var_13 = (unsigned short)1185;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)122;
    value_mismatch |= var_13 != (unsigned short)3404;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}

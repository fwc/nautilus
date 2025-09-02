/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1966
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1966
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
void test(val<unsigned int> var_2, val<long long int> var_7, val<int> zero, val<bool*> var_11, val<long long int*> var_12) {
    *var_11 |= (!(((/* implicit */val<bool>) min(((val<unsigned char>)126), (((/* implicit */val<unsigned char>) (!((val<bool>)1))))))));
    *var_12 = ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<unsigned short>)24097)) < (((/* implicit */val<int>) (val<unsigned short>)41408)))) ? ((~(((/* implicit */val<int>) (val<unsigned short>)24137)))) : (((/* implicit */val<int>) ((15285656882549071977ULL) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((var_2) << (((var_2) - (1193178493U))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-31898)) <= (1127145071))))))))) : (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)18))) - (var_7))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned short>)6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1193178521U;
long long int var_7 = -7542969747746238772LL;
int zero = 0;
bool var_11 = (bool)1;
long long int var_12 = 1872790713960482125LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}

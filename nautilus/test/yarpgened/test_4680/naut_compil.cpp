/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4680
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
void test(val<long long int> var_2, val<bool> var_5, val<unsigned char> var_8, val<long long int> var_11, val<unsigned int> var_16, val<int> zero, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_17 *= var_8;
    *var_18 = ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_16)) > (max((var_2), (((/* implicit */val<long long int>) var_5)))))))) / (var_11));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7323134009736464326LL;
bool var_5 = (bool)1;
unsigned char var_8 = (unsigned char)129;
long long int var_11 = -7839138031443402432LL;
unsigned int var_16 = 3525024788U;
int zero = 0;
unsigned char var_17 = (unsigned char)242;
long long int var_18 = 6506487768725010139LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)242;
    value_mismatch |= var_18 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_11, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}

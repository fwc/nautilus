/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5911
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5911
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
void test(val<int> zero, val<bool*> var_11, val<int*> var_12) {
    *var_11 = ((4766448473461410176ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (((+(4766448473461410176ULL))) != (((/* implicit */val<unsigned long long int>) min((9223372036854775794LL), (((/* implicit */val<long long int>) (val<unsigned char>)151))))))))));
    *var_12 = ((/* implicit */val<int>) (val<unsigned char>)149);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_11 = (bool)1;
int var_12 = 1798145842;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 149;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}

/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1882
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1882
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
void test(val<long long int> var_4, val<signed char> var_5, val<int> zero, val<long long int*> var_10, val<long long int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) ((val<unsigned char>) var_5));
    if (((/* implicit */val<bool>) ((val<unsigned char>) max((((/* implicit */val<long long int>) var_5)), (min((9223372036854775807LL), (((/* implicit */val<long long int>) (val<unsigned char>)31))))))))
    {
        *var_11 = ((/* implicit */val<long long int>) max((*var_11), (((/* implicit */val<long long int>) var_5))));
        *var_12 = var_4;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5522899308559555868LL;
signed char var_5 = (signed char)10;
int zero = 0;
long long int var_10 = 8994726471520049977LL;
long long int var_11 = -1589269603980094113LL;
long long int var_12 = -3924073328352581240LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 10LL;
    value_mismatch |= var_11 != 10LL;
    value_mismatch |= var_12 != 5522899308559555868LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, zero, &var_10, &var_11, &var_12);
  checksum();
}

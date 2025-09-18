/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6507
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6507
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
void test(val<signed char> var_0, val<bool> var_1, val<unsigned long long int> var_6, val<int> zero, val<unsigned short*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    if ((((~(((/* implicit */val<int>) ((val<short>) var_6))))) != (((/* implicit */val<int>) var_1))))
    {
        *var_19 = ((/* implicit */val<unsigned short>) max((1513558544), (((/* implicit */val<int>) (val<bool>)1))));
        *var_20 = ((/* implicit */val<short>) ((val<int>) -1513558552));
    }

    *var_21 = ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
bool var_1 = (bool)0;
unsigned long long int var_6 = 8543363524437252640ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)37999;
short var_20 = (short)-23630;
unsigned long long int var_21 = 8454577697856770221ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)4624;
    value_mismatch |= var_20 != (short)-4632;
    value_mismatch |= var_21 != 31ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, zero, &var_19, &var_20, &var_21);
  checksum();
}

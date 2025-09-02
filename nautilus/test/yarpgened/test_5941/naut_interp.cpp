/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5941
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5941
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
void test(val<int> zero, val<long long int*> var_16, val<unsigned short*> var_17, val<unsigned char*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<long long int>) ((val<bool>) ((val<bool>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)38981)), (1023U)))));
    if (((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)196)))))), ((~(((/* implicit */val<int>) (val<signed char>)-82)))))))
    {
        *var_17 &= ((/* implicit */val<unsigned short>) 4294966263U);
        *var_18 = ((/* implicit */val<unsigned char>) ((val<int>) min((3570589068U), (((/* implicit */val<unsigned int>) ((val<unsigned char>) (val<unsigned short>)18778))))));
    }

    *var_19 &= ((/* implicit */val<bool>) (+(min((((/* implicit */val<long long int>) min((((/* implicit */val<signed char>) (val<bool>)0)), ((val<signed char>)-77)))), (min((((/* implicit */val<long long int>) (val<bool>)1)), (68719476735LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_16 = -4197506091198500241LL;
unsigned short var_17 = (unsigned short)37412;
unsigned char var_18 = (unsigned char)43;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != (unsigned short)37412;
    value_mismatch |= var_18 != (unsigned char)90;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}

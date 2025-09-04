/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3031
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3031
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<unsigned int> var_2, val<unsigned char> var_9, val<signed char> var_10, val<unsigned long long int> var_16, val<bool> var_17, val<unsigned char> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) var_10)), (((val<long long int>) min((var_18), (var_9))))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) min(((val<unsigned char>)164), ((val<unsigned char>)120)))))))
    {
        *var_20 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(var_16)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)657)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_0)))))))));
        *var_21 = (!(((/* implicit */val<bool>) max((min((((/* implicit */val<unsigned long long int>) var_10)), (var_16))), (((/* implicit */val<unsigned long long int>) ((var_17) || (((/* implicit */val<bool>) var_2)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2809359441U;
unsigned short var_1 = (unsigned short)18127;
unsigned int var_2 = 191597333U;
unsigned char var_9 = (unsigned char)111;
signed char var_10 = (signed char)4;
unsigned long long int var_16 = 9506640255639776127ULL;
bool var_17 = (bool)0;
unsigned char var_18 = (unsigned char)204;
int zero = 0;
unsigned short var_19 = (unsigned short)12625;
unsigned short var_20 = (unsigned short)4195;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)111;
    value_mismatch |= var_20 != (unsigned short)65535;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_9, var_10, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}

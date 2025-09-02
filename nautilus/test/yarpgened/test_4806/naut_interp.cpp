/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4806
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4806
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
void test(val<int> var_0, val<unsigned int> var_2, val<unsigned char> var_4, val<unsigned long long int> var_6, val<bool> var_8, val<int> zero, val<signed char*> var_10, val<bool*> var_11, val<short*> var_12, val<unsigned char*> var_13, val<bool*> var_14) {
    if (((/* implicit */val<bool>) (~(((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (val<bool>)1))) & (((var_6) & (var_6))))))))
    {
        *var_10 = ((/* implicit */val<signed char>) (+((~(((var_2) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
        *var_11 = (!(((/* implicit */val<bool>) (-(((val<int>) (val<bool>)1))))));
        *var_12 = ((/* implicit */val<short>) (+((+(((/* implicit */val<int>) ((val<bool>) var_0)))))));
    }

    *var_13 = ((/* implicit */val<unsigned char>) (+((~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_14 = ((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(var_8))))) | (((val<long long int>) 2829448558270901878ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 398136299;
unsigned int var_2 = 2338472056U;
unsigned char var_4 = (unsigned char)47;
unsigned long long int var_6 = 17721283897360911581ULL;
bool var_8 = (bool)0;
int zero = 0;
signed char var_10 = (signed char)-118;
bool var_11 = (bool)1;
short var_12 = (short)21869;
unsigned char var_13 = (unsigned char)148;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-122;
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (short)1;
    value_mismatch |= var_13 != (unsigned char)254;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}

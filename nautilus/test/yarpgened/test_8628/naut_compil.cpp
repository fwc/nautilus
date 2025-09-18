/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8628
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8628
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
void test(val<unsigned int> var_0, val<signed char> var_5, val<long long int> var_6, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19, val<bool*> var_20, val<unsigned short*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<signed char>)-46)) != (((/* implicit */val<int>) (val<unsigned char>)0))));
    if (((/* implicit */val<bool>) min((var_6), (((/* implicit */val<long long int>) (val<signed char>)-123)))))
    {
        *var_19 = ((/* implicit */val<unsigned short>) min((*var_19), (((/* implicit */val<unsigned short>) ((val<long long int>) (+(((val<unsigned int>) -2435244049817877700LL))))))));
        *var_20 = ((/* implicit */val<bool>) var_5);
    }

    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)24797))) > (var_0))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) (val<signed char>)127)))) : (max((0U), (((/* implicit */val<unsigned int>) (val<short>)-3531))))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) ((2435244049817877698LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)64621))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1280632321U;
signed char var_5 = (signed char)-109;
long long int var_6 = -3114671788429363633LL;
int zero = 0;
unsigned short var_18 = (unsigned short)17074;
unsigned short var_19 = (unsigned short)21684;
bool var_20 = (bool)0;
unsigned short var_21 = (unsigned short)11887;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != (unsigned short)21684;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}

/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2753
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2753
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<unsigned short> var_6, val<long long int> var_7, val<int> var_8, val<unsigned int> var_9, val<bool> var_11, val<int> var_15, val<int> var_16, val<unsigned long long int> var_17, val<int> zero, val<unsigned short*> var_18, val<int*> var_19, val<unsigned char*> var_20, val<long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (val<unsigned char>)254)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_15) : (((/* implicit */val<int>) (val<unsigned char>)2))))) : (min((var_5), (((/* implicit */val<unsigned long long int>) var_16)))))))));
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_6)))) % (max((var_8), (((/* implicit */val<int>) (val<unsigned char>)247))))))), ((-(((((/* implicit */val<bool>) var_17)) ? (18446744073709551615ULL) : (var_4))))))))
    {
        *var_19 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) var_8)), ((+(max((var_9), (((/* implicit */val<unsigned int>) (val<unsigned short>)1610))))))));
        *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) max((var_16), (((/* implicit */val<int>) ((val<signed char>) 5718669670081911069LL)))))) : (var_2)));
        *var_21 = ((/* implicit */val<long long int>) ((max((var_4), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_9))))))) >> ((+(min((((/* implicit */val<unsigned long long int>) (val<signed char>)108)), (0ULL)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3093153983512315624ULL;
unsigned long long int var_4 = 6584470001424480466ULL;
unsigned long long int var_5 = 1374696177054879325ULL;
unsigned short var_6 = (unsigned short)49759;
long long int var_7 = 775717268613462838LL;
int var_8 = 1426712659;
unsigned int var_9 = 1289910913U;
bool var_11 = (bool)0;
int var_15 = -1522725645;
int var_16 = 1617615949;
unsigned long long int var_17 = 8871485536516537587ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)32632;
int var_19 = 1293898638;
unsigned char var_20 = (unsigned char)42;
long long int var_21 = -1173912187712390976LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 1293898638;
    value_mismatch |= var_20 != (unsigned char)42;
    value_mismatch |= var_21 != -1173912187712390976LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}

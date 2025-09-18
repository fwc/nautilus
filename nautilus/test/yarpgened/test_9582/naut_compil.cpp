/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9582
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9582
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<long long int> var_2, val<signed char> var_5, val<signed char> var_7, val<int> var_9, val<long long int> var_10, val<short> var_11, val<int> zero, val<int*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15, val<long long int*> var_16) {
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) ((val<signed char>) var_0)))));
    if (((((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)12))) | (var_10))))) == (((/* implicit */val<int>) (val<unsigned char>)255))))
    {
        *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) & (((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_1)) != (var_9))))))));
        *var_14 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_7))))) != (((val<long long int>) var_2))))) / (((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_1))))) || (((/* implicit */val<bool>) ((val<unsigned char>) var_2))))))));
    }

    *var_15 = ((/* implicit */val<unsigned int>) var_11);
    *var_16 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned short var_1 = (unsigned short)10465;
long long int var_2 = -3788808121194804861LL;
signed char var_5 = (signed char)-43;
signed char var_7 = (signed char)29;
int var_9 = -1375033347;
long long int var_10 = 8936234212217750164LL;
short var_11 = (short)-8350;
int zero = 0;
int var_12 = 453066601;
unsigned long long int var_13 = 9087234934273843273ULL;
unsigned int var_14 = 4167198151U;
unsigned int var_15 = 2577360439U;
long long int var_16 = 489898301903756893LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -102;
    value_mismatch |= var_13 != 9087234934273843273ULL;
    value_mismatch |= var_14 != 4167198151U;
    value_mismatch |= var_15 != 4294958946U;
    value_mismatch |= var_16 != -43LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}

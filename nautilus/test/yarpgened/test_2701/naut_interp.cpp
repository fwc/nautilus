/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2701
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2701
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<long long int> var_3, val<unsigned short> var_4, val<long long int> var_5, val<unsigned int> var_6, val<long long int> var_8, val<unsigned short> var_9, val<short> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<short*> var_16, val<int*> var_17, val<int*> var_18, val<unsigned short*> var_19) {
    *var_14 = ((((/* implicit */val<bool>) var_5)) ? (11620402876589192894ULL) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 11620402876589192883ULL)) ? (4096108100352029208LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)0)))))) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))));
    if (((/* implicit */val<bool>) var_4))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) var_9);
        *var_16 *= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_8)) || (((/* implicit */val<bool>) 42471546U))));
    }
    else
    {
        *var_17 = ((/* implicit */val<int>) var_1);
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)21336)) ? (((val<unsigned int>) var_11)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))));
    }

    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)32767)), ((val<unsigned short>)38038)))) << (((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_6)) : (var_3))) - (1068759113LL)))))) ? (var_0) : (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1972654101U;
signed char var_1 = (signed char)19;
long long int var_3 = 1110178297729453524LL;
unsigned short var_4 = (unsigned short)50306;
long long int var_5 = -2404072452959411399LL;
unsigned int var_6 = 1068759126U;
long long int var_8 = 3751745944111559958LL;
unsigned short var_9 = (unsigned short)1258;
short var_11 = (short)21463;
unsigned int var_12 = 3557631375U;
int zero = 0;
unsigned long long int var_14 = 2688768939948005801ULL;
unsigned long long int var_15 = 303424562312020257ULL;
short var_16 = (short)7098;
int var_17 = 1227106525;
int var_18 = -1533549932;
unsigned short var_19 = (unsigned short)3883;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 11620402876589192894ULL;
    value_mismatch |= var_15 != 1258ULL;
    value_mismatch |= var_16 != (short)7098;
    value_mismatch |= var_17 != 1227106525;
    value_mismatch |= var_18 != -1533549932;
    value_mismatch |= var_19 != (unsigned short)20501;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}

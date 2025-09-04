/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1575
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1575
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
void test(val<signed char> var_0, val<bool> var_1, val<unsigned int> var_2, val<int> var_3, val<unsigned short> var_4, val<long long int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_8, val<signed char> var_9, val<unsigned int> var_10, val<int> zero, val<bool*> var_11, val<long long int*> var_12, val<unsigned char*> var_13, val<unsigned int*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<short*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20) {
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<signed char>) var_10))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (min((4981568943372909299ULL), (13465175130336642316ULL)))))) ? (943171465) : (var_3)));
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((val<unsigned int>) 4981568943372909299ULL)), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_1)))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))) ? (((/* implicit */val<int>) ((val<unsigned char>) var_6))) : (((/* implicit */val<int>) var_1))))) : (((var_1) ? (((/* implicit */val<unsigned long long int>) var_2)) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)17551))) & (4981568943372909299ULL)))))));
    *var_13 *= ((/* implicit */val<unsigned char>) ((val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_10))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)9177))))));
    if (((/* implicit */val<bool>) 3452809965U))
    {
        *var_14 = ((/* implicit */val<unsigned int>) ((val<signed char>) var_8));
        if (((/* implicit */val<bool>) (+(((val<long long int>) 3452809962U)))))
        {
            *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) (val<signed char>)127)), ((val<unsigned short>)65535)))), (((var_1) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((-1933905748), (((/* implicit */val<int>) (val<unsigned char>)59))))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)185))) : (2316450000U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<unsigned short>)21151)))))))) : ((-(max((-7457659826945175779LL), (((/* implicit */val<long long int>) (val<signed char>)-110))))))));
            *var_16 = ((((/* implicit */val<bool>) min((var_4), (((/* implicit */val<unsigned short>) var_9))))) ? (((/* implicit */val<unsigned long long int>) -7457659826945175780LL)) : (((((((/* implicit */val<bool>) (val<signed char>)2)) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))) ^ (((/* implicit */val<unsigned long long int>) 3150589337U)))));
            *var_17 = var_10;
        }

        *var_18 = ((/* implicit */val<short>) var_3);
        *var_19 = ((/* implicit */val<bool>) var_10);
    }

    *var_20 = ((/* implicit */val<unsigned long long int>) (((((~(min((var_3), (((/* implicit */val<int>) (val<unsigned short>)21151)))))) + (2147483647))) << (((var_10) - (213401626U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
bool var_1 = (bool)0;
unsigned int var_2 = 3958904489U;
int var_3 = 145174658;
unsigned short var_4 = (unsigned short)45611;
long long int var_5 = -3465851766200698310LL;
unsigned long long int var_6 = 11570512364823637446ULL;
unsigned long long int var_8 = 15133683170673484519ULL;
signed char var_9 = (signed char)-119;
unsigned int var_10 = 213401626U;
int zero = 0;
bool var_11 = (bool)0;
long long int var_12 = -2968178251519156804LL;
unsigned char var_13 = (unsigned char)101;
unsigned int var_14 = 1105433831U;
unsigned char var_15 = (unsigned char)0;
unsigned long long int var_16 = 480965357111031734ULL;
unsigned int var_17 = 3846009774U;
short var_18 = (short)2714;
bool var_19 = (bool)1;
unsigned long long int var_20 = 261117339371128727ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 198LL;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != 4294967271U;
    value_mismatch |= var_15 != (unsigned char)185;
    value_mismatch |= var_16 != 10989084246764375836ULL;
    value_mismatch |= var_17 != 213401626U;
    value_mismatch |= var_18 != (short)12418;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 2147462495ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}

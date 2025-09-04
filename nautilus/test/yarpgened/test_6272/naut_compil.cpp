/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6272
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6272
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<unsigned char> var_3, val<unsigned short> var_4, val<short> var_5, val<unsigned long long int> var_6, val<unsigned short> var_7, val<short> var_8, val<unsigned short> var_9, val<short> var_10, val<short> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned long long int*> var_13, val<bool*> var_14, val<bool*> var_15, val<unsigned short*> var_16, val<unsigned char*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    if (((/* implicit */val<bool>) ((((((/* implicit */val<int>) max((var_5), (var_5)))) >> (((((/* implicit */val<int>) var_1)) - (138))))) % (((/* implicit */val<int>) ((val<unsigned short>) (val<bool>)1))))))
    {
        *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) | (((/* implicit */val<int>) ((val<short>) var_4)))));
        *var_14 = ((/* implicit */val<bool>) ((val<signed char>) (val<unsigned char>)84));
        *var_15 = ((/* implicit */val<bool>) (((((!((val<bool>)1))) ? (((/* implicit */val<int>) ((15179065934546391601ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-45)))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) || (((/* implicit */val<bool>) var_4))))))) * (((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) == (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))))))));
        *var_16 *= ((/* implicit */val<unsigned short>) (((+(((((/* implicit */val<bool>) (val<unsigned char>)63)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_3)))))) < (((/* implicit */val<int>) (((~(((/* implicit */val<int>) var_3)))) == ((~(((/* implicit */val<int>) (val<unsigned char>)195)))))))));
    }

    *var_17 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_4)) ? (18446744073709551613ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))))))));
    *var_18 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned char>) max(((val<short>)24727), (((/* implicit */val<short>) var_1)))))), (max((11611707570472630754ULL), (((/* implicit */val<unsigned long long int>) var_7))))));
    *var_19 |= ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))))) ? ((+(((((/* implicit */val<int>) var_10)) * (((/* implicit */val<int>) var_0)))))) : (((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_1)), (var_12)))) ^ (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned char var_1 = (unsigned char)157;
unsigned char var_3 = (unsigned char)211;
unsigned short var_4 = (unsigned short)65492;
short var_5 = (short)24219;
unsigned long long int var_6 = 423058422398162847ULL;
unsigned short var_7 = (unsigned short)58877;
short var_8 = (short)-24408;
unsigned short var_9 = (unsigned short)63711;
short var_10 = (short)-7841;
short var_11 = (short)-17544;
unsigned short var_12 = (unsigned short)56581;
int zero = 0;
unsigned long long int var_13 = 2819159287506312460ULL;
bool var_14 = (bool)0;
bool var_15 = (bool)0;
unsigned short var_16 = (unsigned short)21059;
unsigned char var_17 = (unsigned char)127;
signed char var_18 = (signed char)97;
signed char var_19 = (signed char)-77;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2819159287506312460ULL;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned short)21059;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (signed char)-30;
    value_mismatch |= var_19 != (signed char)-5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}

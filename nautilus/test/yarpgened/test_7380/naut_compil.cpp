/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7380
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7380
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<int> var_2, val<signed char> var_3, val<short> var_4, val<bool> var_5, val<short> var_6, val<long long int> var_7, val<short> var_9, val<unsigned char> var_10, val<unsigned char> var_14, val<int> var_16, val<int> zero, val<int*> var_17, val<int*> var_18, val<long long int*> var_19, val<short*> var_20, val<bool*> var_21, val<int*> var_22, val<short*> var_23) {
    *var_17 ^= ((((((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) < (((/* implicit */val<int>) var_4))))) ^ (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)56075)))))) ^ (((/* implicit */val<int>) var_6)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (var_2) : (((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<int>) (val<unsigned short>)56067)) & (((/* implicit */val<int>) var_5)))))))))
    {
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<int>) (val<unsigned short>)9496)) | (((/* implicit */val<int>) (val<unsigned short>)9471)))))) == (((/* implicit */val<int>) ((var_2) == (((/* implicit */val<int>) (val<unsigned short>)56037)))))));
        if (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) & (var_7)))) ? (((/* implicit */val<int>) var_0)) : ((+(((/* implicit */val<int>) var_14)))))), (((/* implicit */val<int>) var_6)))))
        {
            *var_19 = ((/* implicit */val<long long int>) max((*var_19), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) 2269864839U)), (18ULL)))) ? (((/* implicit */val<int>) (val<short>)-27733)) : (((/* implicit */val<int>) (val<short>)-32766)))))));
            *var_20 ^= ((/* implicit */val<short>) max((((/* implicit */val<unsigned int>) ((max((((/* implicit */val<unsigned int>) (val<unsigned short>)9461)), (2528405045U))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) (val<unsigned char>)6))))))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (23U)))));
            *var_21 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))), (1899812051)));
            *var_22 ^= ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<unsigned char>)241)) : (((/* implicit */val<int>) (val<unsigned short>)9482))))) <= (((((/* implicit */val<bool>) (val<signed char>)-74)) ? (var_1) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))))))) < (var_1)));
        }

        *var_23 = var_6;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17341;
long long int var_1 = 6907423924680932471LL;
int var_2 = -651703566;
signed char var_3 = (signed char)-124;
short var_4 = (short)-11501;
bool var_5 = (bool)1;
short var_6 = (short)13053;
long long int var_7 = 8455616867372152223LL;
short var_9 = (short)20077;
unsigned char var_10 = (unsigned char)192;
unsigned char var_14 = (unsigned char)106;
int var_16 = 215495150;
int zero = 0;
int var_17 = -978656886;
int var_18 = -1853692800;
long long int var_19 = -2641182144205620674LL;
short var_20 = (short)2793;
bool var_21 = (bool)1;
int var_22 = 667300639;
short var_23 = (short)9917;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -978712452;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != -27733LL;
    value_mismatch |= var_20 != (short)17540;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 667300638;
    value_mismatch |= var_23 != (short)13053;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}

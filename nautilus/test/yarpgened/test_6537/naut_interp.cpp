/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6537
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6537
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<int> var_2, val<signed char> var_4, val<unsigned int> var_6, val<signed char> var_7, val<signed char> var_8, val<signed char> var_9, val<short> var_10, val<int> var_11, val<int> var_12, val<unsigned long long int> var_14, val<int> var_16, val<int> var_17, val<int> zero, val<long long int*> var_18, val<unsigned int*> var_19, val<unsigned short*> var_20, val<signed char*> var_21, val<int*> var_22, val<int*> var_23, val<unsigned short*> var_24) {
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned short>) max(((val<short>)10444), ((val<short>)-10425))))) ? (((((/* implicit */val<unsigned long long int>) min((var_16), (((/* implicit */val<int>) var_4))))) - (((((/* implicit */val<bool>) var_2)) ? (var_14) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-10431))))))) : (((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<bool>) (val<short>)10426)) ? (var_17) : (var_16)))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_0)) ^ (max((((/* implicit */val<int>) ((val<signed char>) -2140619144))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned short>)61629))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-100)) ? (((val<unsigned int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) var_6)) : (var_1)))) : (((/* implicit */val<unsigned int>) (+(min((((/* implicit */val<int>) (val<signed char>)0)), (var_11)))))))))
    {
        *var_20 = ((/* implicit */val<unsigned short>) var_9);
        *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) ((((((/* implicit */val<int>) var_0)) | (var_12))) != (var_17)))) : (((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<unsigned short>)3896)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) (val<short>)10445)))) >= (((/* implicit */val<int>) (val<bool>)1)))))));
        *var_22 = ((/* implicit */val<int>) var_10);
    }
    else
    {
        *var_23 = var_12;
        *var_24 = ((/* implicit */val<unsigned short>) max((1632051114477706684LL), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 3102675265U)) ? (max((((/* implicit */val<unsigned int>) var_8)), (var_6))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)10434)) == (((/* implicit */val<int>) (val<unsigned short>)19130)))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
long long int var_1 = 5668675014975225963LL;
int var_2 = 1940115581;
signed char var_4 = (signed char)55;
unsigned int var_6 = 2312635183U;
signed char var_7 = (signed char)-57;
signed char var_8 = (signed char)89;
signed char var_9 = (signed char)98;
short var_10 = (short)11505;
int var_11 = -1959608732;
int var_12 = -826552099;
unsigned long long int var_14 = 7312320601965434250ULL;
int var_16 = -1964565262;
int var_17 = -287375869;
int zero = 0;
long long int var_18 = 5809751722321892673LL;
unsigned int var_19 = 2338373222U;
unsigned short var_20 = (unsigned short)18825;
signed char var_21 = (signed char)16;
int var_22 = 2065250681;
int var_23 = -1698303147;
unsigned short var_24 = (unsigned short)29689;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -7312320603929999512LL;
    value_mismatch |= var_19 != 140U;
    value_mismatch |= var_20 != (unsigned short)98;
    value_mismatch |= var_21 != (signed char)1;
    value_mismatch |= var_22 != 11505;
    value_mismatch |= var_23 != -1698303147;
    value_mismatch |= var_24 != (unsigned short)29689;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}

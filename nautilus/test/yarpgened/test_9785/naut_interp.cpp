/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9785
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9785
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
void test(val<unsigned char> var_2, val<int> var_5, val<long long int> var_6, val<signed char> var_7, val<int> var_9, val<unsigned short> var_11, val<unsigned char> var_12, val<int> var_13, val<int> zero, val<unsigned long long int*> var_14, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((var_6) | (((/* implicit */val<long long int>) var_13))));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) var_11))));
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (8479749839158557223ULL)));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 9966994234550994406ULL)) ? ((-(8479749839158557246ULL))) : (((9966994234550994385ULL) / (67553994410557440ULL)))))) ? (((10560772253522339199ULL) + (((2845533938003555905ULL) | (10560772253522339189ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
    *var_18 = ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<bool>)1)))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) > (((((/* implicit */val<bool>) var_7)) ? (var_5) : (var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
int var_5 = 1876858279;
long long int var_6 = 2146800866738029884LL;
signed char var_7 = (signed char)113;
int var_9 = -1765135593;
unsigned short var_11 = (unsigned short)13485;
unsigned char var_12 = (unsigned char)138;
int var_13 = -134956465;
int zero = 0;
unsigned long long int var_14 = 15432112029375236467ULL;
long long int var_15 = 1809520568609059967LL;
unsigned long long int var_16 = 3106442215834399027ULL;
unsigned short var_17 = (unsigned short)31756;
long long int var_18 = -4477345615493141269LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 18446744073709551487ULL;
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != 8479749839158557223ULL;
    value_mismatch |= var_17 != (unsigned short)23796;
    value_mismatch |= var_18 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}

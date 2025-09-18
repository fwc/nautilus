/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7008
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7008
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
void test(val<unsigned short> var_1, val<bool> var_3, val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned long long int> var_7, val<long long int> var_9, val<int> var_13, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18) {
    *var_14 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_13)), (((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))));
    *var_15 = var_6;
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_3))))) ? (min((10U), (((/* implicit */val<unsigned int>) (val<bool>)1)))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned short>)13))))))) << (((max((((/* implicit */val<int>) var_6)), ((~(((/* implicit */val<int>) var_4)))))) - (79)))));
    *var_17 = ((/* implicit */val<unsigned char>) max((var_9), (((/* implicit */val<long long int>) var_1))));
    *var_18 = ((/* implicit */val<unsigned short>) (((!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) (val<bool>)0)), ((val<unsigned short>)65523)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) 8404702755428540362LL)), (var_7)))) && (((/* implicit */val<bool>) max((2761896761294755899LL), (((/* implicit */val<long long int>) (val<unsigned short>)8064)))))))) : (((((var_13) % (((/* implicit */val<int>) (val<unsigned short>)65510)))) << (((/* implicit */val<int>) (val<bool>)0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19228;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)229;
unsigned char var_6 = (unsigned char)95;
unsigned long long int var_7 = 7682131674056319393ULL;
long long int var_9 = 2843814130115964943LL;
int var_13 = 2073409342;
int zero = 0;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)183;
unsigned long long int var_16 = 3955847992648043849ULL;
unsigned char var_17 = (unsigned char)253;
unsigned short var_18 = (unsigned short)31040;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)95;
    value_mismatch |= var_16 != 65536ULL;
    value_mismatch |= var_17 != (unsigned char)15;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, var_7, var_9, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}

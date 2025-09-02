/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8001
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8001
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_3, val<long long int> var_6, val<bool> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<int> var_11, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -2429253650945702184LL)) ? ((~(((/* implicit */val<int>) ((val<bool>) (val<bool>)1))))) : (((((/* implicit */val<bool>) (val<unsigned char>)243)) ? (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_11)))))))));
    *var_14 ^= ((/* implicit */val<unsigned char>) var_8);
    *var_15 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<unsigned long long int>) var_7)), (((val<unsigned long long int>) var_0)))) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min(((val<signed char>)-104), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_3)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20397;
unsigned long long int var_3 = 13520987858886255938ULL;
long long int var_6 = -6929897154016837236LL;
bool var_7 = (bool)0;
unsigned long long int var_8 = 7672987744171544498ULL;
unsigned char var_9 = (unsigned char)188;
int var_11 = -1553997151;
int zero = 0;
long long int var_13 = 4857280250757006563LL;
unsigned char var_14 = (unsigned char)56;
unsigned short var_15 = (unsigned short)52434;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -2LL;
    value_mismatch |= var_14 != (unsigned char)138;
    value_mismatch |= var_15 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_8, var_9, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}

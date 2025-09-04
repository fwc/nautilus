/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1281
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1281
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
void test(val<short> var_0, val<unsigned short> var_1, val<unsigned int> var_2, val<unsigned short> var_3, val<signed char> var_4, val<unsigned char> var_6, val<bool> var_9, val<int> zero, val<long long int*> var_10, val<long long int*> var_11, val<unsigned long long int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_2) : (((/* implicit */val<unsigned int>) (-2147483647 - 1)))))) ? (((((/* implicit */val<int>) var_1)) | (((/* implicit */val<int>) var_1)))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)11))) <= (576672112U)))))) ^ (((val<int>) ((((/* implicit */val<bool>) 938822105)) ? (((/* implicit */val<int>) (val<short>)-29858)) : (-938822105))))));
    *var_11 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_9)), (var_3)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_9) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_4))))) ? (((val<long long int>) var_1)) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) * (((/* implicit */val<int>) var_3))))))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)107;
unsigned short var_1 = (unsigned short)932;
unsigned int var_2 = 2638584892U;
unsigned short var_3 = (unsigned short)48652;
signed char var_4 = (signed char)-17;
unsigned char var_6 = (unsigned char)39;
bool var_9 = (bool)0;
int zero = 0;
long long int var_10 = -3212669630268047553LL;
long long int var_11 = 471823640702003973LL;
unsigned long long int var_12 = 2524247259315749870ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -30470LL;
    value_mismatch |= var_11 != 471823640702003973LL;
    value_mismatch |= var_12 != 39ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}

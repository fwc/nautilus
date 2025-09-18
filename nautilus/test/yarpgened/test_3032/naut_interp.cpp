/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3032
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3032
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
void test(val<long long int> var_3, val<int> var_4, val<short> var_8, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_11, val<unsigned char> var_18, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<bool>) var_18);
    *var_20 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<unsigned long long int>) ((val<short>) var_10))), (var_11))) & (((/* implicit */val<unsigned long long int>) max(((~(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) ((val<signed char>) var_9))))))));
    *var_21 = ((/* implicit */val<unsigned char>) min((*var_21), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<short>)-11941)) ? (18446744073709551613ULL) : (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) max((((/* implicit */val<int>) (val<unsigned short>)65535)), (var_4)))), (var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2466156545665907923LL;
int var_4 = -1830615277;
short var_8 = (short)-10778;
unsigned long long int var_9 = 4783397507520238143ULL;
unsigned long long int var_10 = 5364073817072790497ULL;
unsigned long long int var_11 = 18161197477824278207ULL;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
bool var_19 = (bool)0;
unsigned short var_20 = (unsigned short)57053;
unsigned char var_21 = (unsigned char)13;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)10753;
    value_mismatch |= var_21 != (unsigned char)13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, var_10, var_11, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}

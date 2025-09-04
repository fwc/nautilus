/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1215
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1215
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
void test(val<int> var_3, val<unsigned long long int> var_5, val<short> var_9, val<unsigned int> var_10, val<long long int> var_11, val<signed char> var_13, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19) {
    *var_17 = ((/* implicit */val<unsigned short>) (+(((((((/* implicit */val<bool>) var_3)) ? (var_5) : (((/* implicit */val<unsigned long long int>) var_15)))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_11))))))));
    if (((/* implicit */val<bool>) (val<signed char>)122))
    {
        *var_18 = ((/* implicit */val<unsigned long long int>) var_10);
        *var_19 *= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((max((((/* implicit */val<unsigned int>) var_9)), (var_15))), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_13)))))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (2147483647) : (var_3)))) ? (((/* implicit */val<int>) min((var_13), ((val<signed char>)-30)))) : (((/* implicit */val<int>) ((val<unsigned short>) var_5))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 91698778;
unsigned long long int var_5 = 14645015400846869713ULL;
short var_9 = (short)17195;
unsigned int var_10 = 3529342851U;
long long int var_11 = -3783277240827550197LL;
signed char var_13 = (signed char)38;
unsigned int var_15 = 1984623482U;
int zero = 0;
unsigned short var_17 = (unsigned short)2457;
unsigned long long int var_18 = 10107274155285787526ULL;
unsigned char var_19 = (unsigned char)102;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)17626;
    value_mismatch |= var_18 != 3529342851ULL;
    value_mismatch |= var_19 != (unsigned char)102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_10, var_11, var_13, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}

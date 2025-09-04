/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 340
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=340
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<unsigned short> var_5, val<unsigned long long int> var_6, val<signed char> var_7, val<unsigned int> var_8, val<short> var_9, val<long long int> var_10, val<bool> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (13U) : (2228098604U)));
    *var_13 = ((/* implicit */val<signed char>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)25427)) ? (((/* implicit */val<int>) (val<signed char>)-63)) : (((/* implicit */val<int>) (val<signed char>)62))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)74)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_2))))) : (((var_11) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (var_8)))))));
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) var_2)) ? (var_6) : (((/* implicit */val<unsigned long long int>) var_0)))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9)))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) ? ((~(-90769787257288614LL))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)169))) : (var_8)))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned char>)204))))) ? (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (3612471073U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)91)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2561931894U;
unsigned int var_1 = 3879229535U;
unsigned short var_2 = (unsigned short)64138;
unsigned char var_3 = (unsigned char)98;
unsigned short var_5 = (unsigned short)26867;
unsigned long long int var_6 = 5717433404633595709ULL;
signed char var_7 = (signed char)-10;
unsigned int var_8 = 3686382031U;
short var_9 = (short)-6927;
long long int var_10 = 2515185647158051121LL;
bool var_11 = (bool)0;
int zero = 0;
long long int var_12 = -7502467991448751670LL;
signed char var_13 = (signed char)-62;
short var_14 = (short)-32537;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 13LL;
    value_mismatch |= var_13 != (signed char)9;
    value_mismatch |= var_14 != (short)-32537;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}

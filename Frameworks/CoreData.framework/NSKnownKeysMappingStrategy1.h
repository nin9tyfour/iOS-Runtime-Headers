/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy 
{
    NSInteger _cd_rc;
    void *_table;
    NSUInteger _length;
    id _reserved1;
    id *_keys;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (struct __CFArray { }*)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long)arg2;
- (void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2;
- (void)_coreDealloc:(BOOL)arg1;
- (id)initForKeys:(id)arg1;
- (NSUInteger)fastIndexForKnownKey:(id)arg1;
- (id)initForKeys:(const id*)arg1 count:(NSUInteger)arg2;
- (NSUInteger)indexForKey:(id)arg1;
- (const id*)keys;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (NSUInteger)length;
- (id)allKeys;
- (void)release;
- (id)retain;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
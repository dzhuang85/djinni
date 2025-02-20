// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#import "DBExtendedRecord.h"


@implementation DBExtendedRecord

- (nonnull instancetype)initWithFoo:(BOOL)foo
{
    if (self = [super init]) {
        _foo = foo;
    }
    return self;
}

+ (nonnull instancetype)extendedRecordWithFoo:(BOOL)foo
{
    return [[self alloc] initWithFoo:foo];
}

+ (DBExtendedRecord * __nonnull)extendedRecordConst
{
    static DBExtendedRecord * const s_extendedRecordConst = [[DBExtendedRecord alloc] initWithFoo:YES];
    return s_extendedRecordConst;
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p foo:%@>", self.class, (void *)self, @(self.foo)];
}

#endif
@end

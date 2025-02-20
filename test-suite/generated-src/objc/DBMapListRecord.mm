// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#import "DBMapListRecord.h"


@implementation DBMapListRecord

- (nonnull instancetype)initWithMapList:(nonnull NSArray<NSDictionary<NSString *, NSNumber *> *> *)mapList
{
    if (self = [super init]) {
        _mapList = [mapList copy];
    }
    return self;
}

+ (nonnull instancetype)mapListRecordWithMapList:(nonnull NSArray<NSDictionary<NSString *, NSNumber *> *> *)mapList
{
    return [[self alloc] initWithMapList:mapList];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p mapList:%@>", self.class, (void *)self, self.mapList];
}

#endif
@end

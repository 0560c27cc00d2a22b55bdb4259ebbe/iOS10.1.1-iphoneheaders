/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {

	NSMutableDictionary* _attributes;

}
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)extendedAttributeForName:(id)arg1 ;
-(void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributes:(id)arg1 ;
-(id)allAttributes;
@end

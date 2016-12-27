/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString;

@interface FTRegion : NSObject {

	NSDictionary* _dictionary;
	NSArray* _subRegions;
	FTRegion* _parentRegion;

}

@property (retain) NSDictionary * _dictionary;                 //@synthesize dictionary=_dictionary - In the implementation block
@property (retain) FTRegion * _parentRegion;                   //@synthesize parentRegion=_parentRegion - In the implementation block
@property (readonly) NSString * isoCode; 
@property (readonly) NSString * label; 
@property (readonly) NSString * regionID; 
@property (readonly) NSString * basePhoneNumber; 
@property (readonly) FTRegion * parentRegion; 
@property (retain,readonly) NSArray * subRegions;              //@synthesize subRegions=_subRegions - In the implementation block
-(BOOL)isLeafNode;
-(BOOL)search:(id)arg1 withResults:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_setParentRegion:(id)arg1 ;
-(void)set_dictionary:(NSDictionary *)arg1 ;
-(FTRegion *)_parentRegion;
-(void)set_parentRegion:(FTRegion *)arg1 ;
-(NSString *)regionID;
-(NSString *)basePhoneNumber;
-(NSString *)isoCode;
-(FTRegion *)parentRegion;
-(id)regionWithID:(id)arg1 ;
-(NSArray *)subRegions;
-(NSDictionary *)_dictionary;
@end


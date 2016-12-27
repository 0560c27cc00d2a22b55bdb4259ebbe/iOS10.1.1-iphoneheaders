/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder, HFMutableSetDiff, HMRoom, NSSet;

@interface HFRoomBuilder : HFItemBuilder {

	NSString* _name;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;
	HFMutableSetDiff* _accessoryUUIDs;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,readonly) HFMutableSetDiff * accessoryUUIDs;                              //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (nonatomic,readonly) HMRoom * room; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * accessories; 
+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeAccessory:(id)arg1 ;
-(HMRoom *)room;
-(NSSet *)accessories;
-(void)setRoom:(HMRoom *)arg1 ;
-(HFMutableSetDiff *)accessoryUUIDs;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(void)addAccessory:(id)arg1 ;
-(id)_updateName;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
-(id)_createRoom;
-(id)_updateAccessories;
-(id)commitItem;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
@end


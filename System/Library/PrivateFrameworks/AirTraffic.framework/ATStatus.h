/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATStatus : NSObject <NSSecureCoding> {

	BOOL _wirelessSync;
	BOOL _automaticSync;
	unsigned _syncStage;
	unsigned _syncType;
	float _progress;
	NSString* _libraryID;
	NSString* _dataClass;
	NSString* _localizedDescription;
	unsigned long long _completedAssetCount;
	unsigned long long _totalAssetCount;
	unsigned long long _totalItemCount;

}

@property (nonatomic,copy) NSString * libraryID;                                     //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,copy) NSString * dataClass;                                     //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned syncStage;                                     //@synthesize syncStage=_syncStage - In the implementation block
@property (assign,nonatomic) unsigned syncType;                                      //@synthesize syncType=_syncType - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) unsigned long long completedAssetCount;                 //@synthesize completedAssetCount=_completedAssetCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalAssetCount;                     //@synthesize totalAssetCount=_totalAssetCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalItemCount;                      //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign,getter=isWirelessSync,nonatomic) BOOL wirelessSync;                //@synthesize wirelessSync=_wirelessSync - In the implementation block
@property (assign,getter=isAutomaticSync,nonatomic) BOOL automaticSync;              //@synthesize automaticSync=_automaticSync - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(unsigned long long)totalItemCount;
-(NSString *)libraryID;
-(void)setLibraryID:(NSString *)arg1 ;
-(void)setSyncType:(unsigned)arg1 ;
-(unsigned)syncType;
-(id)initWithLibraryID:(id)arg1 dataClass:(id)arg2 ;
-(unsigned)syncStage;
-(BOOL)isWirelessSync;
-(BOOL)isAutomaticSync;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(void)setSyncStage:(unsigned)arg1 ;
-(void)setTotalAssetCount:(unsigned long long)arg1 ;
-(void)setCompletedAssetCount:(unsigned long long)arg1 ;
-(void)setAutomaticSync:(BOOL)arg1 ;
-(void)setWirelessSync:(BOOL)arg1 ;
-(unsigned long long)completedAssetCount;
-(NSString *)dataClass;
-(unsigned long long)totalAssetCount;
@end


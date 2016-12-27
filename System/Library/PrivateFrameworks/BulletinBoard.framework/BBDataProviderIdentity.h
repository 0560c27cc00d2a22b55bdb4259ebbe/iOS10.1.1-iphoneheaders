/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionInfo, BBSectionIcon, NSArray, BBSectionParameters, NSDictionary;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding> {

	SCD_Struct_BB1 _traits;
	NSString* _sectionIdentifier;
	NSString* _universalSectionIdentifier;
	BBSectionInfo* _defaultSectionInfo;
	NSString* _sectionDisplayName;
	BBSectionIcon* _sectionIcon;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	NSArray* _defaultSubsectionInfos;
	NSDictionary* _subsectionDisplayNames;
	NSString* _sortKey;
	NSString* _parentSectionIdentifier;
	NSDictionary* _filterDisplayNames;
	BOOL _syncsBulletinDismissal;

}

@property (nonatomic,readonly) SCD_Struct_BB1 traits;                              //@synthesize traits=_traits - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                           //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;                  //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (nonatomic,copy) BBSectionInfo * defaultSectionInfo;                     //@synthesize defaultSectionInfo=_defaultSectionInfo - In the implementation block
@property (nonatomic,copy) NSString * sectionDisplayName;                          //@synthesize sectionDisplayName=_sectionDisplayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * sectionIcon;                            //@synthesize sectionIcon=_sectionIcon - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) BBSectionParameters * sectionParameters;              //@synthesize sectionParameters=_sectionParameters - In the implementation block
@property (nonatomic,copy) NSArray * defaultSubsectionInfos;                       //@synthesize defaultSubsectionInfos=_defaultSubsectionInfos - In the implementation block
@property (nonatomic,copy) NSString * sortKey;                                     //@synthesize sortKey=_sortKey - In the implementation block
@property (nonatomic,copy) NSDictionary * subsectionDisplayNames;                  //@synthesize subsectionDisplayNames=_subsectionDisplayNames - In the implementation block
@property (nonatomic,readonly) BOOL syncsBulletinDismissal;                        //@synthesize syncsBulletinDismissal=_syncsBulletinDismissal - In the implementation block
@property (nonatomic,copy) NSString * parentSectionIdentifier;                     //@synthesize parentSectionIdentifier=_parentSectionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * filterDisplayNames;                      //@synthesize filterDisplayNames=_filterDisplayNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityForDataProvider:(id)arg1 ;
+(id)identityForRemoteDataProvider:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_BB1)traits;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(NSString *)sortKey;
-(void)setSortKey:(NSString *)arg1 ;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(id)initForDataProvider:(id)arg1 forRemoteDataProvider:(BOOL)arg2 ;
-(void)setDefaultSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setSectionDisplayName:(NSString *)arg1 ;
-(void)setSectionIcon:(BBSectionIcon *)arg1 ;
-(void)setSectionParameters:(BBSectionParameters *)arg1 ;
-(void)setDefaultSubsectionInfos:(NSArray *)arg1 ;
-(NSDictionary *)subsectionDisplayNames;
-(void)setSubsectionDisplayNames:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDisplayNames;
-(void)setFilterDisplayNames:(NSDictionary *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(NSString *)sectionIdentifier;
-(BBSectionInfo *)defaultSectionInfo;
-(BBSectionParameters *)sectionParameters;
-(NSArray *)defaultSubsectionInfos;
-(BOOL)syncsBulletinDismissal;
-(NSString *)universalSectionIdentifier;
-(NSString *)sectionDisplayName;
-(BBSectionIcon *)sectionIcon;
-(NSString *)parentSectionIdentifier;
-(void)setParentSectionIdentifier:(NSString *)arg1 ;
@end


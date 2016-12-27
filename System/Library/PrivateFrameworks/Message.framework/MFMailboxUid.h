/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFMailboxPredictionMailbox.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MFWeakReferenceHolder, NSMutableArray, MailAccount, MFMessageCriterion, NSArray, NSNumber, NSMutableDictionary, MFInvocationQueue;

@interface MFMailboxUid : NSObject <MFMailboxPredictionMailbox, NSCopying> {

	NSString* uniqueId;
	unsigned _mailboxID;
	MFWeakReferenceHolder* _account;
	NSString* _pathComponent;
	unsigned _attributes;
	MFWeakReferenceHolder* _parent;
	NSMutableArray* _children;
	MailAccount* _representedAccount;
	MFMessageCriterion* _criterion;
	BOOL allCriteriaMustBeSatisfied;
	NSString* _realFullPath;
	NSArray* _extraAttributes;
	NSNumber* _pendingLevel;
	int _type;
	NSMutableDictionary* _userInfo;
	NSString* _permanentTag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MFInvocationQueue * attachmentDownloadQueue; 
@property (nonatomic,retain) NSArray * extraAttributes;                                                 //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,retain) NSString * permanentTag;                                                   //@synthesize permanentTag=_permanentTag - In the implementation block
@property (nonatomic,readonly) unsigned long long suggestionsLostMessageSearchResultCount; 
@property (nonatomic,readonly) double suggestionsLostMessageSearchTimestamp; 
+(id)iconFromBundle:(id)arg1 forType:(int)arg2 ;
+(id)shorcutIconNameForMailboxType:(int)arg1 ;
+(id)iconFromBundle:(id)arg1 forType:(int)arg2 ;
+(id)shorcutIconNameForMailboxType:(int)arg1 ;
+(id)specialNameForType:(int)arg1 ;
+(BOOL)isStandardizedMailboxUidType:(int)arg1 ;
+(BOOL)isSentMailboxType:(int)arg1 ;
+(BOOL)isOutgoingMailboxType:(int)arg1 ;
+(BOOL)isDraftsMailboxType:(int)arg1 ;
-(int)level;
-(id)iconFromBundle:(id)arg1 ;
-(id)foundInDescriptionIncludingAccount:(BOOL)arg1 ;
-(id)tinyDisplayIconWithColor:(id)arg1 ;
-(int)level;
-(id)iconFromBundle:(id)arg1 ;
-(id)foundInDescriptionIncludingAccount:(BOOL)arg1 ;
-(id)tinyDisplayIconWithColor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)invalidate;
-(void)setType:(int)arg1 ;
-(int)type;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URL;
-(BOOL)isVisible;
-(void)removeChild:(id)arg1 ;
-(unsigned)attributes;
-(void)setAttributes:(unsigned)arg1 ;
-(id)uniqueId;
-(id)displayName;
-(id)URLString;
-(BOOL)isSelectable;
-(void)setExtraAttributes:(NSArray *)arg1 ;
-(NSArray *)extraAttributes;
-(BOOL)isContainer;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)saveUserInfo;
-(id)fullPath;
-(id)accountRelativePath;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(id)representedAccount;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(id)lastViewedMessageID;
-(id)lastViewedMessageDate;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(id)tildeAbbreviatedPath;
-(id)mutableCopyOfChildren;
-(BOOL)isStandardizedMailboxUid;
-(double)suggestionsLostMessageSearchTimestamp;
-(unsigned long long)suggestionsLostMessageSearchResultCount;
-(id)depthFirstEnumerator;
-(void)flushCriteria;
-(id)childWithName:(id)arg1 ;
-(id)childWithExtraAttribute:(id)arg1 ;
-(id)childWithPermanentTag:(id)arg1 ;
-(void)setRepresentedAccount:(id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 permanentTag:(id)arg4 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 ;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(NSString *)permanentTag;
-(id)_initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 ;
-(id)_mutableChildren;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1 ;
-(unsigned long long)numberOfDescendants;
-(id)URLStringNonNil;
-(id)fullPathNonNil;
-(BOOL)isStore;
-(id)topMailbox;
-(id)rootMailbox;
-(id)ancestralAccount;
-(id)criterion;
-(id)_loadUserInfo;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(void)addToPostOrderTraversal:(id)arg1 ;
-(id)displayNameUsingSpecialNames;
-(id)accountDisplayName;
-(unsigned long long)nonDeletedCount;
-(BOOL)hasChildren;
-(id)childEnumerator;
-(unsigned long long)numberOfChildren;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(id)descendantWithExtraAttribute:(id)arg1 ;
-(id)descendantWithPermanentTag:(id)arg1 ;
-(void)sortChildren;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isSentMailboxUid;
-(BOOL)isOutgoingMailboxUid;
-(BOOL)isNotesMailboxUid;
-(id)realFullPath;
-(id)pathRelativeToMailboxForDisplay:(id)arg1 ;
-(id)oldURLString;
-(unsigned)mailboxID;
-(long long)compareWithMailboxUid:(id)arg1 ;
-(long long)indexToInsertChildMailboxUid:(id)arg1 ;
-(BOOL)isDescendantOfMailbox:(id)arg1 ;
-(BOOL)userInfoBoolForKey:(id)arg1 ;
-(void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)userInfoDictionary;
-(void)setUserInfoWithDictionary:(id)arg1 ;
-(id)userInfoForSerialization;
-(void)setCriterion:(id)arg1 ;
-(BOOL)alwaysWriteFullMessageFile;
-(void)setLastViewedMessageID:(id)arg1 ;
-(void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1 ;
-(void)setPermanentTag:(NSString *)arg1 ;
-(MFInvocationQueue *)attachmentDownloadQueue;
-(id)initWithAccount:(id)arg1 ;
-(id)children;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)account;
-(id)persistentID;
-(unsigned long long)unreadCount;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(BOOL)setChildren:(id)arg1 ;
-(id)store;
@end


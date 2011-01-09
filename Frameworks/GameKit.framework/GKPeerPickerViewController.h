/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKContentView, UITableView, NSString, NSTimer, NSMutableArray, NSMutableDictionary;



@interface GKPeerPickerViewController : UIViewController 
{
    id _delegate;
    NSMutableDictionary *_sessionMap;
    GKContentView *_btView;
    GKContentView *_listView;
    GKContentView *_statusView;
    GKContentView *_inviteView;
    GKContentView *_currentView;
    GKContentView *_connectTypeView;
    GKContentView *_noPeersView;
    UITableView *_peerTableView;
    NSUInteger _connectionTypesMask;
    NSString *_currentConnectionTypeKey;
    NSMutableArray *_menuQueue;
    BOOL _animating;
    BOOL _alertPresented;
    NSInteger _state;
    NSInteger _pendingState;
    BOOL _updating;
    NSTimer *_invitationWaitTimer;
    NSInteger _bluetoothStatus;
    NSString *_searchingForServicesString;
    NSMutableArray *_peers;
    NSString *_pendingPeer;
}

@property(retain) NSTimer *invitationWaitTimer;
@property(getter=isVisible,readonly) BOOL visible;
@property BOOL updating;
@property NSInteger pendingState;
@property NSInteger state;
@property BOOL alertPresented;
@property(getter=isAnimating) BOOL animating;
@property(retain) NSMutableArray *menuQueue;
@property NSInteger bluetoothStatus;
@property NSString *currentConnectionTypeKey;
@property NSUInteger connectionTypesMask;
@property(retain) NSMutableArray *peers;
@property(copy) NSString *searchingForServicesString;
@property(retain) UITableView *peerTableView;
@property(readonly) GKContentView *currentView;
@property(retain) GKContentView *noPeersView;
@property(retain) GKContentView *connectTypeView;
@property(retain) GKContentView *inviteView;
@property(retain) GKContentView *statusView;
@property(retain) GKContentView *listView;
@property(retain) GKContentView *btView;
@property(retain) NSMutableDictionary *sessionMap;
@property(readonly) GKSession *currentSession;
@property id delegate;


- (void)didPresentAlertView:(id)arg1;
- (BOOL)isVisible;
- (BOOL)isAnimating;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)dismiss;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setState:(NSInteger)arg1;
- (NSInteger)state;
- (void)show;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (NSInteger)_determineBluetoothStatus;
- (void)_btPowerStateChanged:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(NSInteger)arg3;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (NSInteger)bluetoothStatus;
- (id)currentSession;
- (void)setSessionMap:(id)arg1;
- (void)setSearchingForServicesString:(id)arg1;
- (void)_sortAndUpdateTable;
- (void)_setSessionAvailabilityForState:(NSInteger)arg1;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (void)_createConnectTypeViewIfNeeded;
- (void)_createBTViewIfNeeded;
- (void)_createListViewIfNeeded;
- (void)_createInviteViewIfNeeded;
- (void)_createStatusViewIfNeeded;
- (void)_createNoPeersViewIfNeeded;
- (void)loadInitialView;
- (BOOL)_updatePicker:(NSInteger)arg1;
- (BOOL)_shouldShowConnectTypeView;
- (void)_showConnectTypeView:(BOOL)arg1;
- (void)_showRequestBluetoothView:(BOOL)arg1;
- (void)_showBluetoothErrorView:(BOOL)arg1;
- (void)_setupListView;
- (void)_showListView:(BOOL)arg1;
- (void)_showInviteViewWithName:(id)arg1 animated:(BOOL)arg2;
- (void)_showStatusView:(NSInteger)arg1 peerName:(id)arg2 animated:(BOOL)arg3;
- (void)_showNoPeersView:(BOOL)arg1;
- (void)_showView:(id)arg1 animated:(BOOL)arg2;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_acceptInvitation:(id)arg1;
- (void)_declineInvitation:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (id)invitationWaitTimer;
- (void)setInvitationWaitTimer:(id)arg1;
- (BOOL)updating;
- (void)setUpdating:(BOOL)arg1;
- (NSInteger)pendingState;
- (void)setPendingState:(NSInteger)arg1;
- (BOOL)alertPresented;
- (void)setAlertPresented:(BOOL)arg1;
- (id)menuQueue;
- (void)setMenuQueue:(id)arg1;
- (void)setBluetoothStatus:(NSInteger)arg1;
- (id)currentConnectionTypeKey;
- (void)setCurrentConnectionTypeKey:(id)arg1;
- (id)peers;
- (void)setPeers:(id)arg1;
- (id)searchingForServicesString;
- (id)peerTableView;
- (void)setPeerTableView:(id)arg1;
- (id)currentView;
- (id)noPeersView;
- (void)setNoPeersView:(id)arg1;
- (id)connectTypeView;
- (void)setConnectTypeView:(id)arg1;
- (id)inviteView;
- (void)setInviteView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)btView;
- (void)setBtView:(id)arg1;
- (id)sessionMap;
- (NSUInteger)connectionTypesMask;
- (void)setConnectionTypesMask:(NSUInteger)arg1;

@end
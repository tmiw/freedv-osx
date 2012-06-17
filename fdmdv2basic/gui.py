# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Mar 17 2012)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MainDialogBase
###########################################################################

class MainDialogBase ( wx.Dialog ):
	
	def __init__( self, parent ):
		wx.Dialog.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"FDMDV2Basic"), pos = wx.DefaultPosition, size = wx.Size( 523,526 ), style = wx.CLOSE_BOX|wx.DEFAULT_DIALOG_STYLE|wx.RESIZE_BORDER )
		
		self.SetSizeHintsSz( wx.Size( -1,-1 ), wx.DefaultSize )
		
		mainSizer = wx.BoxSizer( wx.VERTICAL )
		
		bSizer2 = wx.BoxSizer( wx.HORIZONTAL )
		
		sbSizer1 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, _(u"Settings") ), wx.VERTICAL )
		
		gSizer4 = wx.GridSizer( 3, 1, 0, 0 )
		
		sbSizer3 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, _(u"Audio") ), wx.VERTICAL )
		
		gSizer1 = wx.GridSizer( 4, 2, 0, 0 )
		
		self.m_staticText1 = wx.StaticText( self, wx.ID_ANY, _(u"Rx In (radio):"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText1.Wrap( -1 )
		gSizer1.Add( self.m_staticText1, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboRxInChoices = []
		self.m_comboRxIn = wx.ComboBox( self, wx.ID_ANY, _(u"<default>"), wx.DefaultPosition, wx.DefaultSize, m_comboRxInChoices, 0 )
		gSizer1.Add( self.m_comboRxIn, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		self.m_staticText2 = wx.StaticText( self, wx.ID_ANY, _(u"Rx Out (spkr):"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText2.Wrap( -1 )
		gSizer1.Add( self.m_staticText2, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboRxOutChoices = []
		self.m_comboRxOut = wx.ComboBox( self, wx.ID_ANY, _(u"<default>"), wx.DefaultPosition, wx.DefaultSize, m_comboRxOutChoices, 0 )
		gSizer1.Add( self.m_comboRxOut, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		self.m_staticText3 = wx.StaticText( self, wx.ID_ANY, _(u"Tx In (mic):"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText3.Wrap( -1 )
		gSizer1.Add( self.m_staticText3, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboTxInChoices = []
		self.m_comboTxIn = wx.ComboBox( self, wx.ID_ANY, _(u"<default>"), wx.DefaultPosition, wx.DefaultSize, m_comboTxInChoices, 0 )
		gSizer1.Add( self.m_comboTxIn, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		self.m_staticText4 = wx.StaticText( self, wx.ID_ANY, _(u"Tx Out (radio):"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText4.Wrap( -1 )
		gSizer1.Add( self.m_staticText4, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboTxOutChoices = []
		self.m_comboTxOut = wx.ComboBox( self, wx.ID_ANY, _(u"<default>"), wx.DefaultPosition, wx.DefaultSize, m_comboTxOutChoices, 0 )
		gSizer1.Add( self.m_comboTxOut, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		
		sbSizer3.Add( gSizer1, 0, wx.ALIGN_CENTER_HORIZONTAL|wx.EXPAND|wx.FIXED_MINSIZE, 2 )
		
		
		gSizer4.Add( sbSizer3, 1, wx.ALIGN_CENTER|wx.ALIGN_CENTER_HORIZONTAL|wx.EXPAND|wx.FIXED_MINSIZE, 5 )
		
		sbSizer4 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, _(u"label") ), wx.VERTICAL )
		
		gSizer111 = wx.GridSizer( 2, 2, 0, 0 )
		
		self.m_staticText111 = wx.StaticText( self, wx.ID_ANY, _(u"Rate:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText111.Wrap( -1 )
		gSizer111.Add( self.m_staticText111, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboBox111Choices = []
		self.m_comboBox111 = wx.ComboBox( self, wx.ID_ANY, _(u"Combo!"), wx.DefaultPosition, wx.DefaultSize, m_comboBox111Choices, 0 )
		gSizer111.Add( self.m_comboBox111, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		self.m_staticText211 = wx.StaticText( self, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText211.Wrap( -1 )
		gSizer111.Add( self.m_staticText211, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboBox211Choices = []
		self.m_comboBox211 = wx.ComboBox( self, wx.ID_ANY, _(u"Combo!"), wx.DefaultPosition, wx.DefaultSize, m_comboBox211Choices, 0 )
		gSizer111.Add( self.m_comboBox211, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		
		sbSizer4.Add( gSizer111, 0, wx.ALIGN_CENTER|wx.EXPAND|wx.FIXED_MINSIZE, 2 )
		
		
		gSizer4.Add( sbSizer4, 1, wx.EXPAND|wx.FIXED_MINSIZE, 5 )
		
		sbSizer5 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, _(u"Comm Port") ), wx.VERTICAL )
		
		gSizer11 = wx.GridSizer( 2, 2, 0, 0 )
		
		self.m_staticText11 = wx.StaticText( self, wx.ID_ANY, _(u"Radio:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText11.Wrap( -1 )
		gSizer11.Add( self.m_staticText11, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboBox11Choices = []
		self.m_comboBox11 = wx.ComboBox( self, wx.ID_ANY, _(u"Combo!"), wx.DefaultPosition, wx.DefaultSize, m_comboBox11Choices, 0 )
		gSizer11.Add( self.m_comboBox11, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		self.m_staticText21 = wx.StaticText( self, wx.ID_ANY, _(u"Port:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText21.Wrap( -1 )
		gSizer11.Add( self.m_staticText21, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_comboBox21Choices = []
		self.m_comboBox21 = wx.ComboBox( self, wx.ID_ANY, _(u"Combo!"), wx.DefaultPosition, wx.DefaultSize, m_comboBox21Choices, 0 )
		gSizer11.Add( self.m_comboBox21, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL|wx.EXPAND, 2 )
		
		
		sbSizer5.Add( gSizer11, 0, wx.ALIGN_CENTER|wx.EXPAND|wx.FIXED_MINSIZE, 2 )
		
		
		gSizer4.Add( sbSizer5, 1, wx.ALIGN_CENTER_HORIZONTAL|wx.EXPAND, 5 )
		
		
		sbSizer1.Add( gSizer4, 1, wx.EXPAND, 5 )
		
		
		bSizer2.Add( sbSizer1, 1, wx.EXPAND, 5 )
		
		sbSizer2 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, _(u"Operation") ), wx.VERTICAL )
		
		self.m_toggleStartStop = wx.ToggleButton( self, wx.ID_ANY, _(u"Start"), wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.m_toggleStartStop, 1, wx.ALIGN_CENTER_HORIZONTAL|wx.ALL|wx.EXPAND, 5 )
		
		self.m_toggleRxTx = wx.ToggleButton( self, wx.ID_ANY, _(u"Tx"), wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.m_toggleRxTx, 2, wx.ALIGN_CENTER_HORIZONTAL|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer2.Add( sbSizer2, 0, wx.EXPAND, 5 )
		
		
		mainSizer.Add( bSizer2, 1, wx.EXPAND, 5 )
		
		self.m_staticLine = wx.StaticLine( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LI_HORIZONTAL )
		mainSizer.Add( self.m_staticLine, 0, wx.EXPAND |wx.ALL, 5 )
		
		m_sdbSizer = wx.StdDialogButtonSizer()
		self.m_sdbSizerCancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer.AddButton( self.m_sdbSizerCancel )
		m_sdbSizer.Realize();
		
		mainSizer.Add( m_sdbSizer, 0, wx.ALIGN_RIGHT|wx.BOTTOM|wx.RIGHT, 5 )
		
		
		self.SetSizer( mainSizer )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_CLOSE, self.OnCloseDialog )
		self.Bind( wx.EVT_INIT_DIALOG, self.OnInitDialog )
		self.m_comboRxIn.Bind( wx.EVT_COMBOBOX, self.OnRxInSelect )
		self.m_comboRxOut.Bind( wx.EVT_COMBOBOX, self.OnRxOutSelect )
		self.m_comboTxIn.Bind( wx.EVT_COMBOBOX, self.OnTxInSelect )
		self.m_comboTxOut.Bind( wx.EVT_COMBOBOX, self.OnTxOutSelect )
		self.m_comboBox11.Bind( wx.EVT_COMBOBOX, self.OnRadioSelect )
		self.m_comboBox21.Bind( wx.EVT_COMBOBOX, self.OnPortSelect )
		self.m_toggleStartStop.Bind( wx.EVT_TOGGLEBUTTON, self.OnToggleStartStop )
		self.m_toggleRxTx.Bind( wx.EVT_TOGGLEBUTTON, self.OnToggleRxRx )
		self.m_sdbSizerCancel.Bind( wx.EVT_BUTTON, self.OnCancelClick )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def OnCloseDialog( self, event ):
		event.Skip()
	
	def OnInitDialog( self, event ):
		event.Skip()
	
	def OnRxInSelect( self, event ):
		event.Skip()
	
	def OnRxOutSelect( self, event ):
		event.Skip()
	
	def OnTxInSelect( self, event ):
		event.Skip()
	
	def OnTxOutSelect( self, event ):
		event.Skip()
	
	def OnRadioSelect( self, event ):
		event.Skip()
	
	def OnPortSelect( self, event ):
		event.Skip()
	
	def OnToggleStartStop( self, event ):
		event.Skip()
	
	def OnToggleRxRx( self, event ):
		event.Skip()
	
	def OnCancelClick( self, event ):
		event.Skip()
	

